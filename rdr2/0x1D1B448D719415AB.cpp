// act_bankrobbery01.ysc @ L57707
bool func_1850(int iParam0, var uParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  vector3 vVar5;
  vector3 vVar8;

  if (!EVENT::_0x1D1B448D719415AB(*iParam0))
  {
    return false;
  }
  iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
  switch (iVar0)
  {
    case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
    case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
      iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
      iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
      vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
      vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
      EVENT::_0x1A5C5D350068A673(*iParam0, 0);
      return true;
  }
  return false;
}