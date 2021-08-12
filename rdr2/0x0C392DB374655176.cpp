// beat_dead_john.ysc @ L2670
bool func_35(vector3 vParam0, float fParam3)
{
  bool bVar0;
  int iVar1;

  bVar0 = false;
  if (func_32(PLAYER::PLAYER_ID(), 0, 1, 1))
  {
    iVar1 = ITEMSET::CREATE_ITEMSET(false);
    LAW::_0x0C392DB374655176(vParam0, fParam3, iVar1);
    bVar0 = ITEMSET::GET_ITEMSET_SIZE(iVar1) > 0;
    ITEMSET::_CLEAR_ITEMSET(iVar1);
    ITEMSET::CLEAN_ITEMSET(iVar1);
    ITEMSET::DESTROY_ITEMSET(iVar1);
  }
  return bVar0;
}