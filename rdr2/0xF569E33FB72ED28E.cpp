// cornwallkerosene.ysc @ L1902
void func_78(int iParam0)
{
  MISC::_0xF569E33FB72ED28E();
  func_54(0.775f, 0.2f, 0.025f, 0f);
  if (iLocal_60 == 1)
  {
    LAW::_REMOVE_GUARD_ZONE(sLocal_15);
    func_136(iLocal_19);
    func_136(iLocal_16);
    func_136(iLocal_18);
  }
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_17))
  {
    VOLUME::_0x998202B206872672(iLocal_17);
    VOLUME::_0x6D5F9E69BA1BE783(iLocal_17);
    func_136(iLocal_17);
  }
  if (func_20() == -1 && !func_48(664571177))
  {
    func_106(&uLocal_20);
    func_106(&uLocal_40);
  }
  iParam0 = iParam0;
}