// fm_mission_controller_2020.ysc @ L324011
void func_4694(var uParam0, float fParam1, bool bParam2)
{
  if (fParam1 >= func_4695(uParam0))
  {
    if (MISC::IS_BIT_SET(Local_25291.f_17, 15) && !bParam2)
    {
    }
    else
    {
      if (*uParam0 == 29)
      {
        GRAPHICS::REMOVE_DECALS_FROM_OBJECT_FACING(Local_25291.f_945, ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_25291.f_945));
      }
      else
      {
        GRAPHICS::REMOVE_DECALS_FROM_OBJECT(uParam0->f_2);
      }
      MISC::SET_BIT(&(Local_25291.f_17), 15);
    }
  }
}