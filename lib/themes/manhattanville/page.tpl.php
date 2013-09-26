<div class="main<?php if (isset($page['secondary_content']) && !empty($page['secondary_content'])) : print ' has_sec_content'; endif; ?>">
  <div class="pure-g top">
    <div class="pure-u-1">
      <div class="pure-g columbia">
        <div class="pure-u-1-2">
          <div class="pane left">
          </div>
        </div>
        <div class="pure-u-1-2">
          <div class="pane right">
            <?php print render($manhattanville_search_widget) ?>
          </div>
        </div>
      </div>
      <div class="pure-g brand">
        <div class="pure-u">
          <div class="pane site-logo">
            <h1 class="element-invisible"><?php print $site_name ?></h1>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="banner"></div>
  <div class="pure-g nav">
    <div class="pure-u-1">
      <div class="pure-menu pure-menu-open pure-menu-horizontal">
        <?php print render($main_menu_tree); ?>
      </div>
    </div>
  </div>
  <div class="pure-g">
  	<div class="pure-u-1">
      <?php if ($tabs): ?>
          <?php print render($tabs); ?>
      <?php endif; ?>
      <?php print render($primary_local_tasks); ?>
      <div id="console" class="clearfix">
        <?php if ($messages): ?>
          <?php print $messages; ?></div>
        <?php endif; ?>
      </div>
      <?php if ($page['help']): ?>
        <div id="help">
          <?php print render($page['help']); ?>
        </div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
   </div>
  </div>
  <div class="pure-g page">
   <?php if (!$page['sidebar_first']) : ?>
	  	<div class="pure-u-1-4 secondary">
      <div class="pure-menu pure-menu-open"><?php print render($active_menu_tree); ?></div>
	    </div>
   <?php endif; ?>

<?php $body_class = (!$page['sidebar_first'] ? 'pure-u-3-4' : 'pure-u-1-2'); ?>

    <div class="<?php print $body_class; ?> body-content">
   <?php if (!$page['sidebar_first']): ?>
   		<div class="vertical-spacer"></div>
   <?php endif; ?>
       <div class="element-invisible"><a id="main-content"></a></div>
        <?php if (isset($trail_title)) : ?>
           <!--<h2 class="title"><?php print $trail_title ?></h2>-->
         <?php endif; ?>
   		<div class="body-content-inner">
        <?php print render($page['content']); ?>
   		</div>
    </div>
   <?php if ($page['sidebar_first']) : ?>
	   	<div class="pure-u-1-2 sidebar-right">
        <div class="sidebar-inner">
     		  <?php print render($page['sidebar_first']); ?>
   			</div>
   <?php if (isset($livable_city_logo)) : ?>
	   <div id="livable-city-logo">
   		 <img src="<?php print $livable_city_logo; ?>" />
   	 </div>
   <?php endif; ?>
 			</div>
   <?php endif; ?>
  </div>
  <div class="pure-g footer">
  	<div class="pure-u-1">
      <div class="content">
      	<div class="pure-menu pure-menu-open pure-menu-horizontal">
      	  <?php print render($footer_menu_tree); ?>
      	</div>
      	<?php print render($footer_message); ?>
   			<?php print render($social_media_links); ?>
      </div>
    </div>
  </div>
</div>