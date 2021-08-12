// marston6.ysc @ L57197
bool func_1450(vector3 vParam0)
{
  func_1309(2724.01f, -1450.22f, 44.88f, 100f, 0, 0, 0, 0, 0);
  func_39(0);
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_557[0]))
  {
    iLocal_557[0] = func_1929(902921283, vParam0, 0f, 0);
  }
  else if (VEHICLE::_0xBD3C4A2ED509205E(iLocal_557[0]))
  {
    VEHICLE::_0xC9EA26893C9E4024(iLocal_557[0], vParam0, 0);
    func_1930(&(iLocal_557[0]), 0f, 0, 0, 0, 1);
    VEHICLE::SET_TRAIN_SPEED(iLocal_557[0], 0f);
    return true;
  }
  return false;
}