// player_horse.ysc @ L21586
bool func_762(int iParam0)
{
  if (PED::_GET_PED_COMPONENT_CATEGORY(iParam0, 3, false) == 0)
  {
    return false;
  }
  return true;
}