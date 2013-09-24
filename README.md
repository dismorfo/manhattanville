manhattanville README
==============
# Building the Drupal Distribution

Install drush 5.9.0

	pear install drush/drush-5.9.0
    
Install make_local

	drush dl make_local

Build the drupal distribution, e.g.

	drush make --prepare-install -tar manhattanville.make builds/mville--$(date +"%Y_%m_%d_%H_%M_%S")

...or,

	drush make --prepare-install manhattanville.make builds/manhattanville


# Installing the site

Get your webserver running and pointed at the root directory of the distribution, e.g.

	builds/manhattanville

Edit the database connection settings in sites/default/settings.php.

Now run the installation process using the distributed profile

	drush site-install manhattanville_profile --site-name=Manhattanville --db-url=mysql://USER:PASSWORD@127.0.0.1:PORT/DB_NAME

Some configuration settings packaged in the 'manhattanville_features' module may fail to load, so the module should be reverted right away.

	drush fr manhattanville_features

Visit the site 



