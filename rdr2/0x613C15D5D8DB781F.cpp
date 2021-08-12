// act_caunc_rustling_invite.ysc @ L6782
int func_220(int* iParam0, int iParam1, int iParam2)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_60) || !func_6(*iParam1, 0))
  {
    return 1;
  }
  if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_60) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_60)) && iParam2 == 0)
  {
    return 0;
  }
  if (func_58(iParam0->f_57))
  {
    func_445(iParam0, iParam1);
  }
  func_411(iParam0->f_60, iParam0->f_57);
  iParam0->f_57 = { 0f, 0f, 0f };
  iParam0->f_60 = 0;
  return 0;
}