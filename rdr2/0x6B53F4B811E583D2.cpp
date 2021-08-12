// av_boat_placement.ysc @ L1789
int func_31(var uParam0)
{
  switch (iLocal_10)
  {
    case 0:
      if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_453))
      {
        VEHICLE::SET_BOAT_ANCHOR(uParam0->f_453, true);
        VEHICLE::_0x6B53F4B811E583D2(uParam0->f_453, 1);
        VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(uParam0->f_453, 1, 1);
        func_54(uParam0->f_453, &uLocal_11);
      }
      iLocal_10 = 1;
      break;
    case 1:
      if (ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_453) || func_55(Global_35, uParam0->f_453, 1) < 400f)
      {
        func_56(*uParam0, 0);
        iLocal_10 = 2;
      }
      break;
    case 2:
      if (func_55(Global_35, uParam0->f_453, 1) > 10000f)
      {
        return 1;
      }
      break;
  }
  return 0;
}