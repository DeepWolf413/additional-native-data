// golf.ysc @ L107197
void func_791(var uParam0, var uParam1)
{
  if (!bLocal_470)
  {
    if (func_480(uParam1) != 4)
    {
      CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
      CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
    }
    func_799(uParam1, ENTITY::GET_ENTITY_COORDS(func_1205(uParam1), true));
    func_798(uParam1, SYSTEM::VDIST(func_1202(uParam1), func_539(uParam0, func_531(uParam1))));
  }
  else
  {
    ENTITY::SET_ENTITY_COORDS(func_1205(uParam1), func_1202(uParam1) + Vector(0.05f, 0f, 0f), true, false, false, true);
    func_796(uParam1);
    func_794(uParam1);
  }
  ENTITY::SET_ENTITY_MAX_SPEED(func_1205(uParam1), 150f);
  func_1161(func_1205(uParam1), 1);
  func_1196(uParam1, 2);
  func_792(uParam1, 0f);
}