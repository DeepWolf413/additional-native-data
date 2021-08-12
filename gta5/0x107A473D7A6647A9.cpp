// fm_content_auto_shop_delivery.ysc @ L151539
void func_2467(int iParam0, int iParam1)
{
  int iVar0;
  struct<3> Var1;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1331.f_49[Local_224.f_38.f_1[iParam0 /*21*/].f_8 /*6*/]))
  {
    iVar0 = NETWORK::NET_TO_VEH(Local_1331.f_49[Local_224.f_38.f_1[iParam0 /*21*/].f_8 /*6*/]);
    if (!func_2466(iParam1, -1273030092, 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 19)
    {
      if (func_774(Local_1331.f_26[iParam0 /*22*/]))
      {
        Var1 = { func_2470(iParam0, iVar0) };
        TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, 0, Var1, 19, 30f, 7.5f, func_2469(iParam0), 10, 10, -1f, 8225);
      }
    }
    else if (func_2468(iParam0) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) == 19)
    {
      if (func_774(Local_1331.f_49[Local_224.f_38.f_1[iParam0 /*21*/].f_8 /*6*/]))
      {
        VEHICLE::_0x107A473D7A6647A9(iVar0);
        VEHICLE::_0xB68CFAF83A02768D(iVar0, true);
      }
    }
  }
}