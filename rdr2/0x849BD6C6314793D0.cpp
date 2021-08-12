// feud1_intro.ysc @ L1231
bool func_41(int iParam0)
{
  if (!func_148(iLocal_21, 32))
  {
    if ((PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || ENTITY::DOES_ENTITY_EXIST(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)))
    {
      if (func_149(Global_35, Global_1835011[*iParam0 /*74*/].f_18, &uLocal_18, 16f, 15f, 13f, 12f, 1f, 0, 0, 1, 1, 1))
      {
        func_150(&iLocal_21, 32);
      }
    }
  }
  return ((func_151(Global_35, iLocal_16[0], 1, 0) && !PED::IS_PED_ON_MOUNT(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false));
}