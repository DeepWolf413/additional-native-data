// abigail2_1.ysc @ L33907
bool func_755(var uParam0)
{
  if (!func_1215(uParam0, 1, 1))
  {
    return false;
  }
  func_1241();
  TASK::CLEAR_PED_TASKS(Global_35, true, false);
  iLocal_171 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2594.346f, 457.234f, 146.6093f, 0f, 0f, -9.999996f, 6f, 13f, 3f, "AB21 Block climbing in cabin");
  iLocal_172 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2589.583f, 456.4168f, 145.5692f, 0f, 0f, 0f, 8f, 8f, 3f, "AB21 Dismount volume");
  func_409(&(uParam0->f_7375), 75f);
  func_410(&(uParam0->f_7375), 100f);
  func_1243(uParam0, func_1242("MultiStart01"));
  if (!func_339(joaat("DOCUMENT_LETTER_SADIE_TELEGRAM"), 1, 0))
  {
    func_310(joaat("DOCUMENT_LETTER_SADIE_TELEGRAM"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
  }
  func_1244(uParam0);
  return uParam0->f_607 == uParam0->f_607;
}