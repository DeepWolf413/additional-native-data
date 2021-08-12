// am_mp_drone.ysc @ L11055
void func_368()
{
  int iVar0;
  
  if (((func_35() || func_24()) || func_38()) || func_16())
  {
    iVar0 = 1000;
    if (func_24() || func_38())
    {
      iVar0 = 7000;
    }
    else if (func_16())
    {
      iVar0 = 1100;
    }
    if (!MISC::IS_BIT_SET(Local_185.f_5, 29))
    {
      if (CAM::DOES_CAM_EXIST(Local_185.f_168) && CAM::IS_CAM_RENDERING(Local_185.f_168))
      {
        if (func_17(func_18()))
        {
          if (func_22(&(Local_185.f_268), iVar0, 0))
          {
            ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_18(), true, false);
            ENTITY::SET_ENTITY_COLLISION(func_18(), true, false);
            MISC::SET_BIT(&(Local_185.f_5), 29);
          }
        }
      }
    }
  }
}