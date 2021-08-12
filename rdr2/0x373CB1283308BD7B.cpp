// grays1.ysc @ L61260
int func_1420()
{
  if (func_1948(987516329) && !ENTITY::DOES_ENTITY_EXIST(iLocal_662[4]))
  {
    iLocal_662[4] = VEHICLE::_CREATE_MISSION_TRAIN(987516329, 1457.933f, -631.5366f, 60.5397f, true, false, true, true);
    VEHICLE::SET_TRAIN_SPEED(iLocal_662[4], 15f);
    VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_662[4], true);
  }
  else if (VEHICLE::_0xBD3C4A2ED509205E(iLocal_662[4]))
  {
    func_424(&iLocal_905, 256);
    return 1;
  }
  return 0;
}