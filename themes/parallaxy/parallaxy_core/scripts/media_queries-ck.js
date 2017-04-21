/**
 * @file
 * Fire callbacks for media query breakpoints
 *
 * To use this file enable the OnMediaQuery.js polyfill in your subthemes
 * appearance settings - this will load the required plugin and this file.
 *
 * This allows you to write context (media query) specific JS without hard
 * coding the media queries, aka like matchMedia. Each context matches the
 * media queries you set in theme settings (by adding the font-family
 * declarations to the responsive layout CSS).
 *
 * SEE: https://github.com/JoshBarr/js-media-queries (really, go look, lots of
 * useful documentation available).
 *
 * IMPORTANT: do not rename or move this file, or change the directory name!
 */var queries=[{context:["smartphone_portrait","smartphone_landscape"],call_in_each_context:!1,callback:function(){console.log("smartphone")}},{context:"smartphone_portrait",callback:function(){console.log("smartphone portrait")}},{context:"smartphone_landscape",callback:function(){console.log("smartphone_landscape ")}},{context:["tablet_portrait","tablet_landscape"],call_in_each_context:!1,callback:function(){console.log("tablet")}},{context:"tablet_portrait",callback:function(){console.log("tablet_portrait")}},{context:"tablet_landscape",callback:function(){console.log("tablet_landscape")}},{context:"standard",callback:function(){console.log("standard desktop")}}];MQ.init(queries);