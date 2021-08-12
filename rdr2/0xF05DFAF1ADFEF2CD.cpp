// beat_train_holdup.ysc @ L1720
void func_44()
{
  if (!Local_369.f_161)
  {
    if (func_113(Global_35, Local_369.f_51, 1) < 6400f)
    {
      func_25();
    }
  }
  if (iLocal_1109 == 0)
  {
    if (VEHICLE::_0xF05DFAF1ADFEF2CD(-1464742217, vLocal_1137, bLocal_1112, 1))
    {
      iLocal_1285[0] = VEHICLE::_CREATE_MISSION_TRAIN(-1464742217, vLocal_1137, bLocal_1112, false, true, false);
      bLocal_1410 = true;
    }
    else
    {
      func_25();
    }
  }
  else if (VEHICLE::_0xF05DFAF1ADFEF2CD(-577630801, vLocal_1137, bLocal_1112, 1))
  {
    iLocal_1285[0] = VEHICLE::_CREATE_MISSION_TRAIN(-577630801, vLocal_1137, bLocal_1112, false, true, false);
    bLocal_1410 = true;
  }
  else
  {
    func_25();
  }
}