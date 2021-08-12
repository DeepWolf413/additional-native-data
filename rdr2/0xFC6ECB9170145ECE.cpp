// cornwall1_intro.ysc @ L1430
bool func_41(int iParam0)
{
  int iVar0;
  vector3 vVar1[24];

  func_168(&(uLocal_19[0]), &iLocal_47, &Local_29, 5f, -1082130432 /* Float: -1f */, 0);
  iVar0 = func_169(&(uLocal_19[0]), &iLocal_47, 5f, &Local_29, 0f, 3, 0, 0, 8209, 0, 0, 2, -1082130432 /* Float: -1f */);
  if (iVar0 != -1)
  {
    func_19(&uLocal_118, 1);
    func_170(&uLocal_121, 1, 1);
    if (func_106(Global_35))
    {
      TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
    }
    func_171(&Local_29, 1, 1, 1, 0);
    func_172(&(uLocal_19[0]));
    MISC::_0xE98D55C5983F2509(uLocal_19[0]);
    MISC::_0xFC6ECB9170145ECE();
    TASK::TASK_LOOK_AT_ENTITY(uLocal_19[0], Global_35, -1, 0, 51, 0);
    StringCopy(&cVar1, "CRN1_INT_LI", 24);
    func_117(&(iParam0->f_958.f_1771), cVar1, 0, -1, 0, 0);
    return true;
  }
  return false;
}