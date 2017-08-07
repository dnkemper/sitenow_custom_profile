<?php

/**
 * @file
 * Custom template for homepage numbers block.
 *
 * @ingroup themeable
 */
?>
<div class="count-wrapper">
  <div class="count-inner countupnumber">
      <span class="count-prefix">$</span><span id="countone" class="count">60000</span>
      <div class="count-info">Median salary of our 2015-2016 graduates</div>
    </div>
  </div>
<div class="count-wrapper">
  <div class="count-inner countupnumber">
    <span id="countfour" class="count">30</span><span class="count-suffix">+</span>
    <div class="count-info">Engineering specific student organizations</div>
  </div>
</div>
<div class="count-wrapper">
  <div class="count-inner countupnumber">
    <span id="countfive" class="count">700</span><span class="count-suffix">+</span>
    <div class="count-info">Engineering scholarships were awarded for the 2016-2017 academic year</div>
  </div>
</div>
<div class="count-wrapper">
  <div class="count-inner radialpercentage">
    <span id="counttwo" class="count"></span><span class="sr-only">94%</span>
    <div class="count-info">Undergraduate placement rate</div>
  </div>
</div>
<div class="count-wrapper">
  <div class="count-inner radialpercentage">
    <span id="countthree" class="count"></span><span class="sr-only">29%</span>
    <div class="count-info">2015 first-year engineering students were women <br />
    <small>(20% national average)</small></div>
  </div>
</div>
<div class="count-wrapper">
  <div class="count-inner radialpercentage">
    <span id="countsix" class="count"></span><span class="sr-only">92%</span>
    <div class="count-info">Engineering students complete internships, co-ops, undergrad research or study abroad</div>
  </div>
</div>
<a href="/about" class="count-button btn btn-primary">Learn more about <?php print check_plain(variable_get('site_name')); ?></a>
