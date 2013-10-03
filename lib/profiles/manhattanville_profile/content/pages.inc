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
      'bodytext' => "
<div class=\"imageBox extraBottomMargin\">
<img src=\"/sites/default/files/hhasSmall.jpg\" height=\"166\" width=\"250\" alt=\"Photo by Alan S. Orling\" title=\"Photo by Alan S. Orling\" />
<p class=\"imageBoxDesc\">Harlem Horizon Art Studio, which holds its annual children's art exhibition at Columbia, offers an afternoon art program for inpatient and outpatient kids at Harlem Hospital, an affiliate of Columbia University Medical Center.</p>
</div>
<p>The cultural richness of Harlem, Washington Heights, and surrounding neighborhoods is an essential part of what makes Columbia a great place to work and study. All of us who live and work in the neighborhoods of Upper Manhattan benefit from the work of local organizations and volunteers in our community.</p>
<p>The University partners with organizations that improve the quality of life in our community. This kind of community engagement is an important part of Columbia's mission of education and service. Columbia provides funding and other resources for these programs, but even more important, many of our faculty, staff, and students work alongside our neighbors to deliver services that make a difference to people in Upper Manhattan—from health care and education to job training and youth mentoring.</p>
<p><strong>Did You Know?</strong></p>
<ul>
<li>Approximately 3,000 children receive comprehensive dental care each  year through the Columbia University Medical Center's Mobile Dental Center. It  travels to 45 local day care and Head Start centers throughout Northern  Manhattan.</li>
<li>Through partnerships with more than one hundred community organizations  and agencies, <a href=\"http://www.columbia.edu/cu/ci/\" rel=\"external\">Community Impact at  Columbia University</a> serves more than 8,000 people each year, providing  food, clothing, shelter, education, job training, and companionship for local  residents.</li>
      <li>The Columbia's Center for Community Health and Education has provided eyeglasses  to more than 3,200 students since the inception of the Child Sight Program in  1994.</li>
<li>Columbia University Medical Center, through its Breast Cancer Screening Partnership, provides free mammograms, cervical and colorectal screenings, genetic counseling, mental health guidance, and other life-saving preventative health care services to uninsured women over 40 in Upper Manhattan.</li>
<li>Columbia's Community Service Grants program provides funding for activities and events in area parks, including the Morningside Park Greenmarket, held every Saturday from 8:30 am to 5:00 pm.</li>
      <li>The Columbia University/Goddard Riverside Tenant Assistance Project provides legal aid for residents in Upper Manhattan, primarily Manhattan Valley, often providing tenants with legal representation by Columbia Law School students.</li>
      </ul>
",

      'banner' => 'community_oct1.jpg',
    ),
    array(
      'title' => 'Education and Engagement',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'bodytext' => "
<p>Over the next three decades, Columbia's redevelopment of the old Manhattanville manufacturing area will transform underused blocks into a new center for academic and civic life.</p>
<p>Although much about the  redevelopment is still being  discussed, key elements of the first phase of construction, which is projected to be completed by 2015, are coming into focus. One of those is construction of the Jerome L. Greene Science Center, a world center for neuroscience research that could yield new insights into brain functioning and potential cures for neurological diseases such as Alzheimer's.</p>
<p>Columbia is also working in partnership with the New York City Department of Education to develop a University-assisted public math, science, and engineering secondary school that will serve some 650 high-performing local students. The project area would include a new site for the school, which is slated to open for some grades in September 2007 in temporary space.</p>
<p>Learners of all ages could participate in continuing  education programs provided by the University, local schools, and community organizations. </p>
<p>And local residents and other New Yorkers would work here, shop here, and travel across open, lively streets connecting Harlem to a revitalized Hudson River waterfront.</p>
<p>In partnership with several community  organizations, Columbia provides education  services such as tutoring and mentoring throughout Upper   Manhattan; learn more about these programs <a href=\"http://neighbors.columbia.edu/pages/programsandservices/index.html\">here</a>.</p>
<p><strong>Did You Know?</strong></p>
<div class=\"imageBox\">
<img src=\"/sites/default/files/ddcSmall.jpg\" alt=\"Photo by Alan S. Orling\" width=\"250\" height=\"174\" border=\"0\" title=\"Photo by Alan S. Orling\" />
<p class=\"imageBoxDesc\">A Columbia University student volunteer tutors a local high school student in preparation for the SAT.</p>
</div>
<ul>
<li>Columbia's <a href=\"http://www.columbia.edu/cu/college/ddc/\" rel=\"external\">Double  Discovery Center</a> serves more than 1,000 students each year through its two  youth education programs, Talent Search and Upward Bound.</li>
<li>Through the summer of 2005, 212 science teachers have participated in Columbia's <a href=\"http://www.scienceteacherprogram.org/\" rel=\"external\">Summer Research Program for  Science Teachers</a>. Teachers completing the program return to their  classrooms with a renewed sense of purpose and an increased appreciation for  the process of scientific discovery.</li>
<li><a href=\"http://cpmcnet.columbia.edu/dept/ps/minority/minorityaffairs/prep.html\" rel=\"external\">S-PREP</a>,  an educational and motivational program at Columbia University Medical Center,  provides an academically rigorous college-enrichment experience for minority  and economically disadvantaged high-school students, grades 9 through 12, who  are interested in science, medicine, or related health professions.</li>
<li>Each summer, the Fu Foundation School of Engineering and Applied Science (SEAS) hosts approximately 40 high-school students from around the world, who work on service learning projects that benefit Upper Manhattan communities.</li>
<li>Columbia Law School and Columbia Business School jointly sponsor Harlem Tutorial Program, a volunteer/mentoring program that works in partnership with the Life Sciences Secondary School in East Harlem to provide tutoring and serve as role models for high-school students.</li>
</ul>",
    ),

    array(
      'title' => 'History',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'bodytext' => "
<!--<p>A twenty-minute walk through Manhattanville today opens up 200 years of history, from the neighborhood's waterfront and transportation infrastructure to the buildings that remain from its industrial and commercial past. Although old industries have largely left the area, Manhattanville is poised for a new era of opportunity in the decades ahead.</p>

<p><strong>History</strong></p>-->
<div class=\"imageBox\">
<a href=\"/sites/default/files/Slide_12A_HISTORIC_-_Tiemann_Factory.jpg\" rel=\"external\"><img src=\"/sites/default/files/Slide_12A_HISTORIC_-_Tiemann_Factory_s.jpg\" height=\"254\" width=\"250\" alt=\"The D.F. Tiemann &amp; Co. Color Works factory\" title=\"The D.F. Tiemann &amp; Co. Color Works factory\" /></a>
<div class=\"icons\"><a href=\"/sites/default/files/Slide_12A_HISTORIC_-_Tiemann_Factory.jpg\" rel=\"external\"><img src=\"/sites/default/files/icn_zoom.gif\" class=\"borderedImage\" alt=\"zoom\" border=\"0\" height=\"16\" width=\"21\" /></a></div>
<p class=\"imageBoxDesc\">The D.F. Tiemann &amp; Co. Color Works factory circa mid-1830s</p>
</div>
<p>
At the western edge of what was then known as New Harlem, Manhattanville became incorporated as a village in 1806.
The village soon boasted a commercial waterfront, stables, warehouses, icehouses, and factories. A rail station
and ferry terminal in the 1800s, and then the IRT subway station in the early 1900s, helped spur industrial growth,
and commerce and transportation converged in a thriving waterfront.
</p>
<p>
Dairies and meatpacking industries, including Sheffield Farms (today's Prentis Hall) and the McDermott-Bunger Dairy,
moved into the area. Automobile manufacturers established operations in Manhattanville in the 1920s, and the
Studebaker and Warren Nash Service Center buildings still stand today.
</p>
<p class=\"floatWrap\"></p>
<div class=\"imageBox\">
<a href=\"/sites/default/files/Slide_13A_HISTORIC_-_IRT_Viaduct.jpg\" rel=\"external\"><img src=\"/sites/default/files/Slide_13A_HISTORIC_-_IRT_Viaduct_s.jpg\" height=\"160\" width=\"250\" alt=\"The IRT subway viaduct\" title=\"The IRT subway viaduct\" /></a>
<div class=\"icons\"><a href=\"/sites/default/files/Slide_13A_HISTORIC_-_IRT_Viaduct.jpg\" rel=\"external\"><img src=\"/sites/default/files/icn_zoom.gif\" class=\"borderedImage\" alt=\"zoom\" border=\"0\" height=\"16\" width=\"21\" /></a></div>
<p class=\"imageBoxDesc\">
The IRT subway viaduct, with an arch spanning 168 feet and rising 55
feet above the street, was begun in the summer of 1901.
</p>
</div>
<p>
Columbia University began construction of its Morningside Heights campus, just to the south, in
1896, and, in the 1920s, established today's Medical Center, to the north, in Washington Heights.
Other colleges and institutions also established themselves in the area, as the neighborhood's
residential population grew.
</p>
<p>
The stock market crash of 1929 and the Great Depression signaled the end of strong commercial
growth in Manhattanville. Trucking replaced water and rail transportation, leaving Manhattanville's
waterfront access no longer advantageous to manufacturers. As industries—and the jobs they
created—left the area, Manhattanville lost its industrial base in the decades that followed.
</p>
<p><strong>Heritage</strong></p>
<p>Harlem helped shape the course of artistic expression in the twentieth century and plays a vital role in the world of arts and culture today. From blues and jazz to poetry, literature, and the performing and visual arts, Harlem has been home to innovative thinking for many decades.</p>
<div class=\"imageBoxThinner\">
<img src=\"/sites/default/files/Zora-Neale-Hurston_s.jpg\" height=\"240\" width=\"240\" alt=\"Zora Neale Hurston\" title=\"Zora Neale Hurston\" />
<p class=\"imageBoxDesc\">
Zora Neale Hurston studied anthropology at Barnard College, where she was the college's
first African-American student. She later pursued graduate work at Columbia with renowned
anthropologist Franz Boas.
</p>
</div>
<p>
Louis Armstrong, Duke Ellington, Count Basie, Billie Holiday, Josephine Baker, and countless
other musicians helped make history in Harlem. Langston Hughes, Zora Neale Hurston, Ralph Ellison,
and James Baldwin are just some of the writers who have found inspiration here.
</p>
<p>
Today, the arts community remains vibrant in Harlem. Traditional jazz and contemporary music are
finding new audiences at historic jazz clubs. New gallery and studio spaces have taken root in West
Harlem, and hundreds of local artists support each other through organizations such as the Harlem
Arts Alliance. Stars are still being born and legends made at the Apollo Theater. These are just
some examples of the creative community at work today in Harlem.
</p>
<p>
Neighborhood residents come together in other ways, too. Civic engagement flourishes in West Harlem,
from the community board and local schools, to religious, philanthropic, and other community-based
organizations.
</p>
<p class=\"floatWrap\"></p>
<p><strong>Manhattanville Today</strong></p>
<div class=\"imageBox\">
<a href=\"/sites/default/files/Slide_17_125th_from_above-1.jpg\" rel=\"external\"><img src=\"/sites/default/files/Slide_17_125th_from_above_s.jpg\" height=\"167\" width=\"250\" alt=\"Manhattanville Today\" title=\"Manhattanville Today\" /></a>
<div class=\"icons\"><a href=\"/sites/default/files/Slide_17_125th_from_above-1.jpg\" rel=\"external\"><img src=\"/sites/default/files/icn_zoom.gif\" class=\"borderedImage\" alt=\"zoom\" border=\"0\" height=\"16\" width=\"21\" /></a></div>
<p class=\"imageBoxDesc\">Manhattanville today, viewed from the 125th Street Station on the No. 1 train</p>
</div>
<p>
Community leaders and residents are working together to continually improve the schools, parks, and local
businesses that are at the heart of the neighborhoods of West Harlem. In addition, we all recognize the
need for new jobs and business opportunities.<!-- A particular concern has been how to revitalize the underused,
formerly industrial section of Manhattanville that sits between the residential neighborhoods and the waterfront.-->
</p>
<p>
Columbia's redevelopment plan, crafted with community and government leaders over almost five years,
will make the former manufacturing area of West Harlem once again a source of jobs, innovation,
and opportunity for the neighborhood and a vital contributor to the future of the city.
</p>
",
    ),

    array(
      'title' => 'Community Services',
      'language' => LANGUAGE_NONE,
      'type' => 'page',
      'bodytext' => "
<p>As part of the University's ongoing commitment to the local community, Columbia has dedicated this section of the Neighbors website to communicate the University's commitments for project-related programs and services that are currently available.  For the purpose of determining program eligibility, \"local community\" shall mean the neighborhoods in Community Districts 9, 10, 11, and 12, unless otherwise defined within each individual benefit.</p>
<p>In September 2013, the University provided an overall update on progress through a publication entitled <a href=\"/communityservices/files/static/content/Growing%20Together%20-%20Update%20to%20the%20Community.pdf\">Growing Together: An Update on Community Services, Amenities, and Benefits of Columbia University’s Manhattanville Campus in West Harlem</a>.</p><p>Click on each benefit link for more information on how to access a benefit or use the search box below to locate a benefit.  For example, for high school internships, type \"internship\" in the box. </p>
<p style=\"text-align: justify\">The following agreements govern Columbia's Manhattanville Project:</p><table border=\"1\" cellpadding=\"1\" cellspacing=\"1\" style=\"width: 500px\"><tbody><tr><td><strong>Governing Documents</strong></td><td><strong>Effective Date</strong></td></tr><tr><td><a href=\"/communityservices/files/static/content/2011.12.14%20Final%20Declaration.pdf\">Declaration of Covenants and Restrictions (DCR)</a></td><td>December 14, 2011</td></tr><tr><td><a href=\"http://www.columbia.edu/cu/gca/news/COmmunityBenefitsAgreement/index.html\">Community Benefits Agreement (CBA)</a></td><td>May 20, 2009</td></tr></tbody></table><p> </p>
",
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

  $footer_links = array('Resources', 'Contact Us');

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