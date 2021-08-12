// rcm_war_veteran3.ysc @ L15428
void func_437()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  if (bLocal_84)
  {
    return;
  }
  iVar0 = 464103564;
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
  {
    return;
  }
  if (ENTITY::_0x5744562E973E33CD(iVar0, &iVar1, &iVar2, &iVar3, 0))
  {
    if ((!TXD::_HAS_STREAMED_TXD_LOADED(iVar1) || !TXD::_HAS_STREAMED_TXD_LOADED(iVar2)) || !TXD::_HAS_STREAMED_TXD_LOADED(iVar3))
    {
      TXD::_REQUEST_STREAMED_TXD(iVar1, false);
      TXD::_REQUEST_STREAMED_TXD(iVar2, false);
      TXD::_REQUEST_STREAMED_TXD(iVar3, false);
    }
    else
    {
      ENTITY::_0xDD03FC2089AD093C(iLocal_57, joaat("PROVISION_WOLF_FUR"), iVar0, 0);
      bLocal_84 = true;
    }
  }
}