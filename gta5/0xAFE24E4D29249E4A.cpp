// fm_content_island_heist.ysc @ L131496
void func_2726(int iParam0, int iParam1)
{
  switch (iParam0)
  {
    case 0:
      ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iParam1, true);
      ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
      ENTITY::SET_ENTITY_DYNAMIC(iParam1, false);
      ENTITY::SET_ENTITY_COORDS(iParam1, func_2729(iParam0), true, false, false, true);
      OBJECT::_0xAFE24E4D29249E4A(NETWORK::NET_TO_OBJ(Local_12697.f_1212[iParam0 /*3*/]), func_2728(iParam0), func_2728(iParam0), false);
      break;
  }
}