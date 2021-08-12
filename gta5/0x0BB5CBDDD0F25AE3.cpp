// am_pi_menu.ysc @ L412802
void func_5909()
{
  int iVar0;
  
  if ((ENTITY::DOES_ENTITY_EXIST(Global_1301911) && func_1185(PLAYER::PLAYER_PED_ID(), Global_1301911, 1) <= 50f) && func_5160(Global_1301911))
  {
    iVar0 = 0;
    if (((VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 0) == 1f && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 1) == 1f) && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 4) == 1f) && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 5) == 1f)
    {
      iVar0 = 1;
    }
    else if (((VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 0) == 1f && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 1) == 1f) && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 4) == 0f) && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 5) == 0f)
    {
      iVar0 = 2;
    }
    else if (((VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 0) == 0f && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 1) == 0f) && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 4) == 1f) && VEHICLE::_GET_HYDRAULIC_WHEEL_VALUE(Global_1301911, 5) == 1f)
    {
      iVar0 = 3;
    }
    Global_2526974[3 /*66*/][10] = iVar0;
    Global_2526974[99 /*66*/][3] = iVar0;
  }
}