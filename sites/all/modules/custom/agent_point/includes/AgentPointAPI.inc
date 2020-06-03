<?php
 

class AgentPointAPI {
    private $agencies = [];
    
    function __construct($agencies) {
       $this->agencies = $agencies;
    }
   
    function printAgencies() {        
        drupal_set_message(json_encode($this->agencies));
    }
    
    function connect(){
        $options = array(
            //'method' => 'POST',
           // 'data' => $data,
           // 'timeout' => 15,
           //'headers' => array('Content-Type' => 'application/x-www-form-urlencoded'),
        );
        
        $agencies = $this->agencies;
        $url = 'https://jsonplaceholder.typicode.com/todos/1';
        $result = drupal_http_request($url);
        drupal_set_message(json_encode($result));
    }
}
