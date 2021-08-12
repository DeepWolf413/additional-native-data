// dairyfarm.ysc @ L1908
void func_77(int iParam0)
{
  int iVar0;
  int iVar1;

  LAW::_REMOVE_GUARD_ZONE(sLocal_18);
  func_135(iLocal_17);
  func_135(iLocal_15);
  func_136();
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
  {
    VOLUME::_0x998202B206872672(iLocal_16);
    VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
    func_135(iLocal_16);
  }
  iVar0 = 762;
  iVar1 = func_93(iVar0);
  if (ENTITY::DOES_ENTITY_EXIST(iVar1))
  {
    PED::_0xBCC76708E5677E1D(iVar1, 0);
  }
  if (func_20() == -1)
  {
    func_104(&uLocal_19);
    func_104(&uLocal_39);
  }
}