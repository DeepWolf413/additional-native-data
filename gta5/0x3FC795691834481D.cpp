// ob_vend1.ysc @ L64037
void func_246(bool bParam0)
{
  func_247();
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
  {
    if (ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
    {
      ENTITY::DETACH_ENTITY(iLocal_55, true, true);
      if (bParam0)
      {
        ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_55, 1, Local_56, 0f, 0f, 0f, 0, true, true, false, false, true);
      }
    }
    if (Global_77248)
    {
      NETWORK::_0x3FC795691834481D(iLocal_55, 0);
    }
    ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_55);
  }
  iLocal_52 = 0;
  bLocal_53 = false;
}