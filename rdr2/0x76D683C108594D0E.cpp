// av_pump_cart.ysc @ L1765
int func_31(var uParam0)
{
  switch (iLocal_9)
  {
    case 0:
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_11))
      {
        if (!func_54(iLocal_11))
        {
          VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_11, true);
        }
        AUDIO::SET_HORN_ENABLED(iLocal_11, false);
        VEHICLE::SET_TRAIN_SPEED(iLocal_11, 0f);
        VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_11, 0f);
      }
      iLocal_9 = 1;
      break;
    case 1:
      if (func_55(uParam0, uParam0->f_493, uParam0->f_494, 4, uParam0->f_495, 1112014848 /* Float: 50f */))
      {
        func_56(*uParam0, 0);
        func_57(*uParam0, uParam0->f_483, 0);
        iLocal_9 = 2;
      }
      break;
    case 2:
      return 1;
  }
  return 0;
}