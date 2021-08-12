// marston2.ysc @ L37135
int func_814(char[4] cParam0)
{
  func_467(4, 0);
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
  {
    AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
    AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[0], 1);
  }
  func_467(8, 0);
  PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
  func_930(0f, 0f);
  func_135(cParam0, 0);
  func_134(cParam0, 0);
  func_943(&uLocal_262, 0);
  func_945(&uLocal_265, 0);
  iLocal_201 = 0;
  func_946(&iLocal_167);
  func_946(&uLocal_172);
  func_947(&uLocal_190);
  func_225(&uLocal_218);
  func_464(&uLocal_1433);
  func_1373();
  LAW::_0x710448D44A64C213(1);
  return 1;
}