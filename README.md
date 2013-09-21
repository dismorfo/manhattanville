manhattanville README
==============
# Building the Drupal Distribution

Install drush 5.9.0

	pear install drush/drush-5.9.0
    
Install make_local

	drush dl make_local

Build the drupal distribution, e.g.

	drush make --prepare-install -tar manhattanville.make builds/mville--$(date +"%Y_%m_%d_%H_%M_%S")


# Running the site

TBD

