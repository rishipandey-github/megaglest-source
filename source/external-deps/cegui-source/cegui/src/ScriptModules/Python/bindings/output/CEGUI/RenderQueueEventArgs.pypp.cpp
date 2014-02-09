// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "RenderQueueEventArgs.pypp.hpp"

namespace bp = boost::python;

void register_RenderQueueEventArgs_class(){

    { //::CEGUI::RenderQueueEventArgs
        typedef bp::class_< CEGUI::RenderQueueEventArgs, bp::bases< CEGUI::EventArgs > > RenderQueueEventArgs_exposer_t;
        RenderQueueEventArgs_exposer_t RenderQueueEventArgs_exposer = RenderQueueEventArgs_exposer_t( "RenderQueueEventArgs", "*!\n\
        \n\
            EventArgs based class that is passed to handlers subcribed to hear about\n\
            beginend events on rendering queues that are part of a RenderingSurface\n\
            object.\n\
        *\n", bp::init< CEGUI::RenderQueueID >(( bp::arg("id") ), "*!\n\
            \n\
                Constructor for RenderQueueEventArgs objects.\n\
        \n\
            @param id\n\
                RenderQueueID value indicating the queue that the event is being\n\
                generated for.\n\
            *\n") );
        bp::scope RenderQueueEventArgs_scope( RenderQueueEventArgs_exposer );
        bp::implicitly_convertible< CEGUI::RenderQueueID const, CEGUI::RenderQueueEventArgs >();
        RenderQueueEventArgs_exposer.def_readwrite( "queueID", &CEGUI::RenderQueueEventArgs::queueID, "! ID of the queue that this event has been fired for.\n" );
    }

}
