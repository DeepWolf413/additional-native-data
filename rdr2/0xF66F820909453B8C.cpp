// ambush_bnd_ridge_ambush.ysc @ L7716
void func_269(int iParam0, int iParam1, bool bParam2)
{
  if (bParam2)
  {
    if (!ENTITY::IS_ENTITY_VISIBLE((*iParam0)[iParam1]))
    {
      ENTITY::_0xA91E6CF94404E8C9((*iParam0)[iParam1]);
      ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], true);
    }
    else
    {
      ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], true);
    }
    ENTITY::SET_ENTITY_COLLISION((*iParam0)[iParam1], true, false);
    ENTITY::SET_ENTITY_PROOFS((*iParam0)[iParam1], 0, false);
    ENTITY::FREEZE_ENTITY_POSITION((*iParam0)[iParam1], false);
    func_317(iParam0, iParam1, 4);
  }
  else
  {
    ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], false);
    ENTITY::SET_ENTITY_COLLISION((*iParam0)[iParam1], false, false);
    ENTITY::SET_ENTITY_PROOFS((*iParam0)[iParam1], 127, false);
    ENTITY::FREEZE_ENTITY_POSITION((*iParam0)[iParam1], true);
    func_223(iParam0, iParam1, 4);
  }
}