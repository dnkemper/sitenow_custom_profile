// Include gulp.
var gulp = require('gulp');
var config = require('./config.json');

// Include plugins.
var shrinkwrap = require('gulp-shrinkwrap');
var sass = require('gulp-sass');
var imagemin = require('gulp-imagemin');
var pngcrush = require('imagemin-pngcrush');
var shell = require('gulp-shell');
var plumber = require('gulp-plumber');
var notify = require('gulp-notify');
var autoprefixer = require('gulp-autoprefixer');
var glob = require('gulp-sass-glob');
var uglify = require('gulp-uglify');
var concat = require('gulp-concat');
var rename = require('gulp-rename');
var sourcemaps = require('gulp-sourcemaps');

// CSS.
gulp.task('css', function() {
  return gulp.src(config.css.src)
    .pipe(glob())
    .pipe(plumber({
      errorHandler: function (error) {
        notify.onError({
          title:    "Gulp",
          subtitle: "Failure!",
          message:  "Error: <%= error.message %>",
          sound:    "Beep"
        }) (error);
        this.emit('end');
      }}))
    .pipe(sourcemaps.init())
    .pipe(sass({
      style: 'compressed',
      errLogToConsole: true,
      includePaths: config.css.includePaths
    }))
    .pipe(autoprefixer(['last 2 versions', '> 1%', 'ie 9', 'ie 10']))
    .pipe(sourcemaps.write('./'))
    .pipe(gulp.dest(config.css.dest));
});

// Shrinkwrap
gulp.task('shrinkwrap', function () {
  return gulp.src('package.json')
    .pipe(shrinkwrap({dev: true}))                               // just like running `npm shrinkwrap`
    .pipe(gulp.dest('./'));
});

// Waypoints.
gulp.task('copywaypoints', function() {
   gulp.src('./bower_components/waypoints/lib/jquery.waypoints.js')
   .pipe(gulp.dest('./assets/js/waypoints'));
   gulp.src('./bower_components/waypoints/lib/shortcuts/inview.js')
   .pipe(gulp.dest('./assets/js/waypoints'));
});

// CountUp.
gulp.task('copycountup', function() {
   gulp.src('./bower_components/countUp.js/countUp.js')
   .pipe(gulp.dest('./assets/js/countUp'));
});

// radialIndicator.
gulp.task('copyradialIndicator', function() {
   gulp.src('./bower_components/radialIndicator/radialIndicator.js')
   .pipe(gulp.dest('./assets/js/radialIndicator'));
});

// JS
gulp.task('js', function() {
  return gulp.src(config.js.src)
    .pipe(sourcemaps.init())
    .pipe(concat(config.js.file))
    .pipe(plumber({
      errorHandler: function (error) {
        notify.onError({
          title:    "JS",
          subtitle: "Failure!",
          message:  "Error: <%= error.message %>",
          sound:    "Beep"
        }) (error);
        this.emit('end');
      }}))
    .pipe(uglify())
    .pipe(sourcemaps.write('./'))
    .pipe(gulp.dest(config.js.dest));
});

// Compress images.
gulp.task('images', function () {
  return gulp.src(config.images.src)
    .pipe(imagemin({
      progressive: true,
      svgoPlugins: [{ removeViewBox: false }],
      use: [pngcrush()]
    }))
    .pipe(gulp.dest(config.images.dest));
});

// Fonts.
gulp.task('fonts', function() {
  return gulp.src(config.fonts.src)
    .pipe(gulp.dest(config.fonts.dest));
});

// Static Server + Watch
gulp.task('serve', ['css', 'js', 'fonts', 'copywaypoints', 'copycountup', 'copyradialIndicator', 'shrinkwrap'], function() {
  gulp.watch(config.js.src, ['js']);
  gulp.watch(config.css.src, ['css']);
  gulp.watch(config.images.src, ['images']);
});

// Run drush to clear the theme registry.
gulp.task('drush', shell.task([
  'drush cache-clear theme-registry'
]));

// Default Task
gulp.task('default', ['serve']);
