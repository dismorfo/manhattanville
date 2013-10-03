<?php
function research_initiatives () {
 $nodes = array(
    array(
      'title' => 'Addiction and Reward',
      'bodytext' => 'Substance abuse and addiction have a profound impact on individuals, families, the workplace, and communities. The initiative on addiction and reward seeks to elucidate the neural circuitry and mechanisms of addiction and reward in order to enable the development of targeted biological treatments for addiction.',
      'image' => 'slide_1.jpg',
    ),
    array(
      'title' => 'Affective Disorders',
      'bodytext' => 'Schizophrenia and bipolar illness are two of the most devastating mental health disorders, together affecting 3 to 4 percent of the population. This effort will establish a core program of brain science that will help determine the biological function of genes discovered to have a role in affective disorders –a decisive step toward deciphering the causes of these major mental illnesses.',
      'image' => 'slide_2.jpg',
    ),
    array(
      'title' => 'Brain Imaging',
      'bodytext' => 'Some of the biggest breakthroughs in brain science have emerged from the development of technologies for imaging the human brain. This initiative will support the development of the next breakthroughs in imaging technology, advancing our capacity to image the activity of a small number of neurons, as well as the organization of many billions of neurons, all within the moment that it takes the mind to generate a thought.',
      'image' => 'slide_6.jpg',
    ),
    array(
      'title' => 'Brain Viability',
      'bodytext' => 'This initiative will define the core principles and mechanisms that regulate the delicate balance between neuronal maintenance and degeneration – a tension that lies at the heart of contemporary studies of neuronal plasticity. Basic advances on neuronal viability should inform us about the critical triggers for neurodegenerative disease.',
      'slide_5.jpg',
    ),
    array(
      'title' => 'Cortex and Cognition',
      'bodytext' => 'The cerebral cortex is responsible for high-order cognitive functions, from problem-solving to language. Defects in cortical development have been associated with a range of disorders, including anxiety and certain forms of epilepsy. The work on cortex and cognition will focus on understanding the organization of the cerebral cortex and neurodevelopmental processes that make the difference between health and disability.',
      'image' => 'slide_3.jpg',
    ),
    array(
      'title' => 'Decision Making',
      'bodytext' => 'This effort will draw together research on brain processes responsible for higher cognitive functions. Research will focus on decision-making, an area that exemplifies the flexible, contingent, goal-directed behaviors that are the hallmarks of cognition. It will build on the idea that neural mechanisms supporting human decision-making may be viewed as elaborations of more easily understood mechanisms in simpler mammals.',
      'image' => 'slide_4.jpg',
    ),
    array(
      'title' => 'Language and Communication',
      'bodytext' => 'The capacity to learn and use spoken language relies on neural systems that transform sound into information and thoughts into vocal sounds. Efforts in language and communication will focus on understanding circuitry and activity in auditory, cognitive processing and motor regions of the brain that are crucial for vocal communication.',
      'image' => 'slide_7.jpg',
    ),
    array(
      'title' => 'Learning and Memory',
      'bodytext' => 'The goal of the Institute’s work in this area is to understand how memories are acquired, how they are stored, and how they can be retained and recalled for the lifetime of an individual. We expect these research programs to help our basic understanding of memory storage in the normal brain, as well as lead to more direct and effective therapeutic approaches to disorders of learning and memory.',
      'image' => 'slide_8.jpg',
    ),
    array(
      'title' => 'Movement Control',
      'bodytext' => 'The human brain devotes vast resources to endow us with seemingly effortless control over our bodies that cannot be equaled by the most sophisticated software controlling the most advanced robots. Institute researchers will study the neural circuitry that produces and guides movement and the neural code underlying movement. They will engineer approaches that leverage our scientific knowledge to aid patients who are paralyzed.',
      'image' => 'slide_9.jpg',
    ),
    array(
      'title' => 'Neurotheory',
      'bodytext' => 'Never in the history of neuroscience research has the need been greater for theoretical modeling and sophisticated data analysis. Columbia’s Center for Theoretical Neuroscience will strive to link theoretical studies to experimental data, applying methods from mathematics, physics, statistics, computer science, and engineering to problems in neuroscience',
      'image' => 'slide_11.jpg',
    ),
    array(
      'title' => 'Sensory Perception',
      'bodytext' => 'We are who we are in large part because of the way that we process the world around us. All of this depends on our sensory systems - the crucial conduit that links the external world to the inner workings of our brain and mind. This initiative will approach the major challenges in the field of sensory biology –to understand how sensory representations are constructed, stored, recalled, and modified by experience.',
      'image' => 'slide_10.jpg',
    )
  );

  foreach($nodes as &$n) {
    $n['type'] = 'research_initiative';
    $n['language'] = LANGUAGE_NONE;
  }

  return $nodes;
}