<?php

/**
 * @file
 * template.php
 */



 function bootstrap_masstapp_preprocess_html(&$vars) {

   // The body tag's classes are controlled by the $classes_array variable. To
   // remove a class from $classes_array, use array_diff().
   //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));

     $body_classes = array($vars['classes_array']);
     if ($vars['user']) {
         foreach($vars['user']->roles as $key => $role){
             $role_class = 'role-' . str_replace(' ', '-', $role);
             $vars['classes_array'][] = $role_class;
         }
     }
 }
