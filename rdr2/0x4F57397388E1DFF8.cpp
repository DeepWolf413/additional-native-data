// marston7.ysc @ L17553
void func_165()
{
  ENTITY::REMOVE_MODEL_HIDE(vLocal_203, 2.5f, iLocal_32, 0);
  MISC::_0x243CEDE8F916B994();
  TASK::_0x4F57397388E1DFF8();
  if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_239))
  {
    TASK::REMOVE_COVER_POINT(iLocal_239);
  }
  if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_240))
  {
    TASK::REMOVE_COVER_POINT(iLocal_240);
  }
  func_429(sLocal_81);
  func_429(sLocal_82);
  func_430();
  func_431(0);
  func_432(0);
  func_433();
  func_434(0, 0, 1103626240 /* Float: 25f */);
  func_435(38, 1);
  UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
  func_436(&iLocal_237);
}