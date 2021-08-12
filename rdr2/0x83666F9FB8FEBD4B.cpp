// beat_posse_breakout.ysc @ L6045
void func_186()
{
  int iVar0;

  if (func_187())
  {
    return;
  }
  if (!func_30(&uLocal_1208))
  {
    func_31(&uLocal_1208);
  }
  else if (func_32(&uLocal_1208) > fLocal_1149)
  {
    iVar0 = (BUILTIN::TIMERA() % 4);
    switch (iVar0)
    {
      case 0:
        func_433(0, &uLocal_1145);
        break;
      case 1:
        func_433(1, &uLocal_1146);
        break;
      case 2:
        func_433(2, &uLocal_1147);
        break;
      case 3:
        func_433(3, &uLocal_1148);
        break;
    }
  }
}