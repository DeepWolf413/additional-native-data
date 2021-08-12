// grizzlieswest_population.ysc @ L36
void __EntryFunction__()
{
  bool bVar0;

  fLocal_7 = 1f;
  fLocal_8 = 1f;
  func_1();
  func_2();
  func_3(&uLocal_14, 5);
  bVar0 = true;
  while (bVar0)
  {
    func_4(&uLocal_14);
    if (func_5(-1414537028))
    {
      POPULATION::_0xF45E46DEECF7DF6E(2016, 0, 0, -1, -1);
    }
    else if (func_5(38162571))
    {
      POPULATION::_0xF45E46DEECF7DF6E(224, 0, 0, -1, -1);
      POPULATION::_0xDBBF12EA7C1029B2(0, 1);
    }
    else if (func_5(1350391819))
    {
      POPULATION::_0xDBBF12EA7C1029B2(1, 1);
    }
    func_6();
    BUILTIN::WAIT(0);
  }
  func_7();
  SCRIPTS::TERMINATE_THIS_THREAD();
}