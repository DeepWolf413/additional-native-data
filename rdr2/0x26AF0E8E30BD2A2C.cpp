// mudtown3.ysc @ L55422
bool func_1340(var uParam0)
{
  float fVar0;

  func_1933();
  if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_148[10], true, 0))
  {
    func_1333(uParam0, 3);
    return true;
  }
  if (!func_1339(3) && !func_167(74))
  {
    return true;
  }
  if (PED::_IS_PED_OPENING_A_DOOR(Global_35))
  {
    fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(706990067);
    if (fVar0 > 0.2f)
    {
      return true;
    }
  }
  return false;
}