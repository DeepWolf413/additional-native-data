// am_pi_menu.ysc @ L357524
void func_5163(int iParam0, bool bParam1)
{
  int iVar0;
  
  *bParam1 = 0;
  if (ENTITY::DOES_ENTITY_EXIST(Global_1301911) && func_1185(PLAYER::PLAYER_PED_ID(), Global_1301911, 1) <= 50f)
  {
    iVar0 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(Global_1301911);
    *bParam1 = (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(Global_1301911, false) && (iVar0 == 2 || iVar0 == 0));
  }
  func_1148(Global_2520218.f_6748.f_2, "PIM_PV_ROOF", 0, *bParam1, 0, 0, 0);
  StringCopy(&(Global_2520218.f_6733), "PIM_PV_ROOF", 24);
  StringIntConCat(&(Global_2520218.f_6733), Global_2526974[iParam0 /*66*/][Global_2520218.f_6748.f_2], 24);
  func_1148(Global_2520218.f_6748.f_2, &(Global_2520218.f_6733), 0, *bParam1, 0, 0, 0);
  if (Global_2520218.f_6739 == 8)
  {
    Global_2520129 = *bParam1;
  }
}