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

	drush site-install manhattanville-profile

Visit the site 

