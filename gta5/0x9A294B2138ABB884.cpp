// agency_heist3a.ysc @ L130461
void func_970()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_844))
  {
    STREAMING::REQUEST_MODEL(Local_844.f_2);
    if (STREAMING::HAS_MODEL_LOADED(Local_844.f_2))
    {
      Local_844 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_844.f_2, Local_844.f_3, true, true, false);
    }
  }
}