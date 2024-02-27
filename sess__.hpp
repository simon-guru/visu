
#ifndef VISU_SESS_HPP
#define VISU_SESS_HPP 0x01

#include <type_traits>
#include <memory>

namespace visu {
	using namespace ::std;
	
	template <...> 
	struct SessOns : public enable_shared_from_this <SessOns<...>> {
	protected:
  template <...> struct Sess : public enable_shared_from_this <Sess<...>> {
	  friend struct SessOns;
		  
	  template <typename stream>
	  explicit Sess (stream&&, );
	  virtual ~Sess () = default;
	  
	  template <class Tv> inline
	  const bool operator == (Tv const& v) try {
		  if constexpr (is_same<Tv, ...>::value){
				   	
			}	else if constexpr (is_same<Tv, ...>::value){
				   	
			} else throw ;
		} catch (...) ;
			
		template <class Tv> inline
	  const bool operator > (Tv const& v) try {
		  if constexpr (is_same<Tv, ...>::value){
				   	
			}	else if constexpr (is_same<Tv, ...>::value){
				   	
			} else throw ;	
		} catch (...) ;
		
		template <class Tv> inline
	  const bool operator < (Tv const& v) try {
		  if constexpr (is_same<Tv, ...>::value){
				   	
			}	else if constexpr (is_same<Tv, ...>::value){
				   	
			} else throw ;	
		} catch (...) ;			
		
	  template <class Tv> inline
	  const bool operator >= (Tv const& v) try {
		  if constexpr (is_same<Tv, ...>::value){
				   	
			}	else if constexpr (is_same<Tv, ...>::value){
				   	
			} else throw ;	
		} catch (...) ;
		
		template <class Tv> inline
	  const bool operator <= (Tv const& v) try {
		  if constexpr (is_same<Tv, ...>::value){
				   	
			}	else if constexpr (is_same<Tv, ...>::value){
				   	
			} else throw ;	
		} catch (...) ;
		
		template <class Tv> inline
	  const bool operator != (Tv const& v) try {
		  if constexpr (is_same<Tv, ...>::value){
				   	
			}	else if constexpr (is_same<Tv, ...>::value){
				   	
			} else throw ;	
		} catch (...) ;
		
	  protected:
		  virtual void logOut (void) final;	
	};
	
	private:
		shared_ptr<multimap<string_view, weak_ptr<Sess<...>>> sessOnlines;
	  
	public:
	  	
			template<class stream, class body, class field> inline
			void logIn (stream &&strm, ...) try {
				make_shared<Sess<...>>()->executar();	 			 	
			} catch (...)	{
								
			}	
			
			template<class stream, class body, class field> inline
			void push_solicit (stream &&strm, ...) try {
					 			 	
			} catch (out_of_range const&)	{
				this->logIn(strm,solicit);				
			}	
														
	};
	
}

#endif
