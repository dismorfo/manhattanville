<?php

function mville_pages() {

  require_once('dummy_content.inc');

  $nodes =  array(
    array(
      'title' => 'Home',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'bodytext' => '
                    <p>Columbia Manhattanville campus will be a vibrant center of academic and civic life, ensuring that Upper Manhattan remains a world-class center of pioneering research and teaching. With its open, environmentally sustainable design, local retail amenities, and publicly accessible green spaces, the campus will provide a pedestrian-friendly connection between West Harlem and the scenic Harlem Piers Park along the Hudson River. The life of the project will span some three decades. The first phase of development includes innovative new buildings for Columbia’s Nobel Prize-winning neuroscience, Columbia Business School, the School of the Arts, an academic conference center and new spaces for art, culture and community.</p>
                    <p>A globally respected academic center, Columbia is also a vital local institution, committed to the economic, intellectual, social and cultural vitality of our neighborhoods and New York City. In that spirit, together with our West Harlem neighbors, elected representatives and civic leaders, we have developed a plan for a mixed-use academic center that provides a long-term future of shared opportunity.</p>
                    <iframe width="560" height="315" src="http://www.youtube.com/embed/CRdncAfENpY" frameborder="0" allowfullscreen></iframe>
                    <p>The Jerome L. Greene Science Center, home to the Mortimer B. Zuckerman Mind, Brain, Behavior Institute, will open in 2015.</p>',
      'banner' => 'home_oct1.jpg',
    ),
    array(
      'title' => 'Team',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'bodytext' => filter_xss('<p>The planning, design and construction of the Manhattanville campus are being managed by a University-led planning team. Four preeminent architectural and planning firms are planning and design the campus: Renzo Piano Building Workshop; Skidmore, Owings & Merrill; Diller Scofidio + Renfro; and Field Operations. Our construction partners are Lend Lease and McKissack & McKissack.</p>'),
    ),
    array(
      'title' => 'Academics',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'banner' => 'academics_oct1.jpg',
      'bodytext' => manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum(),
    ),
    array(
      'title' => 'Community',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'bodytext' => manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_video() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum(),
      'banner' => 'community_oct1.jpg',
    ),
    array(
      'title' => 'Planning and Design',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'bodytext' => manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum(),
      'banner' => 'planning_oct1.jpg',
    ),
    array(
      'title' => 'Planning',
      'language' => LANGUAGE_NONE,
      'bodytext' => manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_video() . manhattanville_profile_generate_lorum_ipsum(),
      'type' => 'page',
    ),
    array(
      'title' => 'Stories',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
    ),
    array(
      'title' => 'Design Goals',
      'language' => LANGUAGE_NONE,
      'bodytext' => manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_video() . manhattanville_profile_generate_lorum_ipsum() . manhattanville_profile_generate_lorum_ipsum(),
      'type' => 'page',
    ),
    array(
      'title' => 'Construction',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'banner' => 'construction_oct1.jpg',
    ),
  );

  $footer_links = array('Community Services', 'Resources', 'Contact Us');

  foreach($footer_links as $title) {
    $n = array(
      'title' => $title,
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'bodytext' => manhattanville_profile_generate_lorum_ipsum(),
    );
    array_push($nodes, $n);
  }



  return $nodes;
}