// comment
bool Data::DoStuff(int enum_type){
    Param* par=NULL;
    for(object=obj.begin();obj<obj.end();++obj){
        if(par->GetEnum()==enum_type){ return true; }
    }
    _error_("string here!" << strx(enum_type));
    return false;
}