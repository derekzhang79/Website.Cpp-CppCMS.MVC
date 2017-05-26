#include "home_controller.h"
#include <cppcms/url_mapper.h>
#include <cppcms/url_dispatcher.h>

#include "../../../resources/views/layouts/app/home.h"

namespace app
{
  namespace http
  {
    namespace controllers
    {
    	HomeController::HomeController(cppcms::service &s) : Controller(s)
    	{
    	  dispatcher().assign(".*", &HomeController::index, this);
    	}

    	void HomeController::index()
    	{
    	  views::layouts::app::Home view;
    	  view.text = ">>>Hello<<<";
        view.title = "Home Page";
    	  render("Home", view);
    	}
    }
  }
}

