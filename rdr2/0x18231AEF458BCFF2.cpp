// guama3.ysc @ L40967
int func_885(char[4] cParam0)
{
  switch (func_33(cParam0))
  {
    case 0:
      break;
    case 25:
      if (!bLocal_4823)
      {
        STREAMING::SET_SRL_TIME(33000f);
        bLocal_4823 = true;
        return 0;
      }
      else
      {
        STREAMING::SET_SRL_TIME(33000f);
      }
      if (!STREAMING::IS_SRL_LOADED())
      {
        return 0;
      }
      break;
  }
  return 1;
}