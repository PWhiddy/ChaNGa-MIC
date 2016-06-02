

#ifndef CK_TEMPLATES_ONLY
void _registerReductions(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerInitCall(registerReductions,1);

}
#endif /* CK_TEMPLATES_ONLY */
