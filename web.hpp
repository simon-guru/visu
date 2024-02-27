
#ifndef VISU_WEB_HPP
#define VISU_WEB_HPP 0x01

#include <type_traits>
#include <memory>

namespace visu {
	
  inline namespace web {
	  
		typedef struct {
			typedef http::verb::head  /* Alias para uma solicitação HEAD */	head; 	
			typedef http::verb::get   /* Alias para uma solicitação GET */	get; 	
			typedef http::verb::put   /* Alias para uma solicitação PUT */	put;
			typedef http::verb::post  /* Alias para uma solicitação POST */	post;
			typedef http::verb::option/* Alias para uma solicitação 	OPTION */opt;										
			typedef http::verb::delete_/* Alias para uma solicitação DELETE */del;									
		}	metod;
		
	  
			
			
	}
	
}

#endif
