// vig_playlist_party_hso.ysc @ L18487
int func_528(int iParam0)
{
  int iVar0;

  if (!func_181(iParam0))
  {
    return 0;
  }
  iVar0 = func_178(iParam0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return 0;
  }
  return PED::_0x94132D7C8D3575C4(iVar0);
}