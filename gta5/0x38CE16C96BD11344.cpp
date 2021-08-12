// act_cinema.ysc @ L68659
void func_358(int iParam0)
{
  VEHICLE::_0xE851E480B814D4BA(iParam0, false);
  VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(iParam0, false);
  VEHICLE::_0xAB04325045427AAE(iParam0, false);
  VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, false);
  func_365(iParam0, 0);
  if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_364())
  {
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_627(0)))
    {
      if (iParam0 == func_655())
      {
        NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(func_627(0), false, true);
      }
    }
  }
  if (func_363(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_209(32274, -1, -1) == 1)
  {
    VEHICLE::_SET_REDUCE_DRIFT_VEHICLE_SUSPENSION(iParam0, true);
  }
  if (!func_360(ENTITY::GET_ENTITY_MODEL(iParam0), 0) && !func_359(ENTITY::GET_ENTITY_MODEL(iParam0)))
  {
    Global_2544210.f_966 = func_635();
  }
}