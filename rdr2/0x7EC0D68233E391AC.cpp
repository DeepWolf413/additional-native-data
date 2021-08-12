// main.ysc @ L11400
void func_188()
{
  if (Global_1894899.f_9)
  {
    if (!func_619(Global_1934266.f_148))
    {
      func_620();
    }
  }
  switch (HUD::_0x7EC0D68233E391AC(6))
  {
    case 1:
      if (!func_619(Global_1934266.f_148))
      {
        func_620();
      }
      break;
    case 2:
      if (func_619(Global_1934266.f_148))
      {
        UIFEED::_0x2F901291EF177B02(Global_1934266.f_148, 0);
      }
      break;
  }
}