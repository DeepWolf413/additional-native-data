// dairyfarm.ysc @ L1130
void func_55()
{
  int iVar0;
  int iVar1;

  if (func_20() != -1)
  {
    return;
  }
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(VOLUME::_0x7FD78DFD0C5D7B9B(iLocal_16)))
  {
    func_92();
  }
  iVar0 = 762;
  iVar1 = func_93(iVar0);
  if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(iVar1)))
  {
    func_94(iVar1);
  }
}