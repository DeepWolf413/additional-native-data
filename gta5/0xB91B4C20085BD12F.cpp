// am_pi_menu.ysc @ L424061
void func_6095()
{
  int iVar0;
  int iVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(Global_1301911) && !ENTITY::IS_ENTITY_DEAD(Global_1301911, false))
  {
    VEHICLE::GET_VEHICLE_LIGHTS_STATE(Global_1301911, &iVar0, &iVar1);
    if (iVar0 == 1 || iVar1 == 1)
    {
      MISC::SET_BIT(&Global_1301905, 5);
      Global_2526974[Global_2520128 /*66*/][Global_2520218.f_6739] = 0;
    }
    else
    {
      MISC::SET_BIT(&Global_1301905, 4);
      Global_2526974[Global_2520128 /*66*/][Global_2520218.f_6739] = 1;
    }
  }
}