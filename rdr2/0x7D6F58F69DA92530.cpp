// beat_intimidation_tactics.ysc @ L9281
int func_279(int iParam0, char* sParam1, int iParam2, float fParam3)
{
  vector3 vVar0;

  if (!func_43(iParam2))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_606[iParam0]) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_606[iParam0], iLocal_344))
    {
      if (fParam3 > func_281(iParam0))
      {
        ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, sParam1, iLocal_606[iParam0]);
        OBJECT::DELETE_OBJECT(&(iLocal_606[iParam0]));
        vVar0 = { 2519.15f, -1202.25f, 53.8082f };
        if (iParam2 == 4096)
        {
          vVar0 = { 2518.21f, -1203.14f, 53.5364f };
        }
        FIRE::ADD_EXPLOSION(vVar0, 2, 1f, true, false, 0f);
        func_131(iParam2);
        return 1;
      }
    }
  }
  return 0;
}